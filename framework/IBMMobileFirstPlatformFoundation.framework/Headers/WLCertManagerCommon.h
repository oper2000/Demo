/*
 * Licensed Materials - Property of IBM
 * 5725-I43 (C) Copyright IBM Corp. 2006, 2013. All Rights Reserved.
 * US Government Users Restricted Rights - Use, duplication or
 * disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

#import <Foundation/Foundation.h>
#import "WLSecurityCommonUtils.h"

@interface WLCertManagerCommon : NSObject

+ (NSData *)getKeyChainKeyBits:(NSData *) keychainTag isCertificate:(BOOL) isCertificate;

//Generate key pair and save into keychain

+ (NSMutableDictionary *) generateKeyPair:(NSData *)privateKeyLabel
                       withPublicKeyLabel:(NSData *)publicKeyLabel
                              withKeySize:(NSNumber *)keySizeInBits;

+ (NSMutableDictionary *) getKeyPairForEntity:(NSData *)privateKeyLabel
                           withPublicKeyLabel:(NSData *)publicKeyLabel;


@end
