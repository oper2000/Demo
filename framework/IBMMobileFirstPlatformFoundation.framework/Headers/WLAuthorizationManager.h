/*
 * Licensed Materials - Property of IBM
 * 5725-I43 (C) Copyright IBM Corp. 2006, 2013. All Rights Reserved.
 * US Government Users Restricted Rights - Use, duplication or
 * disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

#import <Foundation/Foundation.h>
#import "WLResponse.h"

extern NSString * const ERROR_OAUTH_PREVENT_REDIRECT;
extern NSString * const ERROR_OAUTH_CANCELED;

/**
 * This class manages the entire OAuth flow, from client registration to token generation.
 */
@interface WLAuthorizationManager : NSObject


/**
 * Gets the <code>WLAuthorizationManager</code> shared instance
 *
 * @return <code>WLAuthorizationManager</code> shared instance
 */
+ (WLAuthorizationManager *) sharedInstance;


/**
 * Explicit call to obtain the access token.
 *
 * @param completionHandler Completion handler with response containing the authorization header value.
 * @param scope OAuth scope that the resource requires.
 */
- (void) obtainAuthorizationHeaderForScope:(NSString*)scope completionHandler:(void(^) (WLResponse* response, NSError* error))completionHandler;

/**
 *  Signs payload using the device's private key and returns a JWS Object
 *
 *  @param NSDictionary payload to be signed
 */
- (NSString *) signPayload:(NSDictionary *) payload;

/**
 *  Adds the authorization header value to any <code>NSURLRequest</code> request
 *
 *  @param request Request
 */
//- (void) addCachedAuthorizationHeaderToRequest:(NSMutableURLRequest*)request;

/**
 * Checks whether the response is a MobileFirst OAuth error.
 *
 * @param NSURLResponse response
 * @return true if the response is a MobileFirst OAuth error, or false otherwise.
 */
- (BOOL) isAuthorizationRequiredForResponse:(NSURLResponse *)response;

/**
 * Checks whether the response is a MobileFirst OAuth error.
 *
 * @param status HTTP status
 * @param headers <code>NSDictionary</code> of response headers
 * @return true if the response is a MobileFirst OAuth error, or false otherwise.
 */

- (BOOL) isAuthorizationRequiredForResponseWithStatus:(NSInteger)status
                                  authorizationHeader:(NSString *) authorizationHeader;

/**
 * Gets the scope of the response from a protected resource
 *
 * @param response Response returned from protected resource
 * @return Scope that is returned in the <code>WWW-Authenticate</code> header
 */
- (NSString *) authorizationScopeForResponse : (NSURLResponse *) response;


/**
 * Gets the scope of the response from a protected resource
 *
 * @param NSDictionary Response headers
 * @return Scope that is returned in the <code>WWW-Authenticate</code> header
 */
- (NSString*) authorizationScopeForResponseWithAuthorizationHeader:(NSString *) authorizationHeader;

@end
