/**
	Licensed Materials - Property of IBM

	(C) Copyright 2015 IBM Corp.

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

//
//  WLPushOptions.h
//  WorklightStaticLibProject
//
//  Created by worklightdev on 27/01/13.
//  Copyright (c) 2013 odedr@worklight.com. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * This class contains the subscription parameters.
 */
@interface WLPushOptions : NSObject

@property  bool alert;
@property  bool sound;
@property  bool badge;
@property (strong) NSDictionary *parameters;


/**
 * Adds a subscription parameter.
 *
 * @param name Mandatory. The name of the subscription parameter.
 * @param value Mandatory. The value of the subscription parameter.
 **/
-(void) addSubscriptionParameter :(NSString *)name :(NSString *)value;

/**
 * Returns the map that contains the subscription parameters.
 *
 * @param name Mandatory. The name of the subscription parameter.
 * @return Map that contains the subscription parameters.
 **/
-(NSDictionary *) getSubscriptionParameters;

/**
 * Adds a subscription parameters.
 *
 * @param parameters Mandatory. The NSDictionary that contains the list of subscription parameters.
 **/
-(void) addSubscriptionParameters :(NSDictionary *)parameters;

/**
 * Returns the value of the given subscription parameter.
 *
 * @param name Mandatory. The name of the subscription parameter.
 * @return Value of the given subscription parameter.
 **/
-(NSString *) getSubscriptionParameter :(NSString *)name;

@end