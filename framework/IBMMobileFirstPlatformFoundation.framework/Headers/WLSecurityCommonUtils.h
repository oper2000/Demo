/*
 * Licensed Materials - Property of IBM
 * 5725-I43 (C) Copyright IBM Corp. 2006, 2013. All Rights Reserved.
 * US Government Users Restricted Rights - Use, duplication or
 * disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

#import <Foundation/Foundation.h>

#import "WLSecurityConstants.h"

@interface WLSecurityCommonUtils : NSObject

/**
 Takes an NSString and returns Base64 encoded NSData.
 @param string Input NSString
 @return Base64 encoded NSData
 @since IBM Worklight V6.2.0
 */
+ (NSData*) base64DataFromString:(NSString*) string;

+ (NSString*) _base64StringFromData:(NSData*) data
                             length:(unsigned long)length
                          isSafeUrl:(bool) isSafeUrl;

+(unsigned char *) _getNativeKeyFromHexString:(NSString *) key
                         withCorrectConversion:(BOOL) correctConversion;

+(unsigned char *) _getNativeIVFromHexString:(NSString*) iv
                       withCorrectConversion:(BOOL) correctConversion;


@end
