/**
	Licensed Materials - Property of IBM

	(C) Copyright 2015 IBM Corp.

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
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
