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
//  WLWatchConnectivity.h
//  WorklightStaticLibProject
//
//  Created by Amichai Meir on 07/12/2015.
//  Copyright © 2015 IBM. All rights reserved.
//

/**
 * This class manages the MFP communication between the iPhone and Watch devices.
 * The app running on the iPhone can share information with its paired Watch.
 * In order to enable sharing, the iPhone app and the Watch extension must invoke startSharingSession once.
 */
#import <Foundation/Foundation.h>
#import <WatchConnectivity/WatchConnectivity.h>

/**
 
 @since IBM MobileFirst V8.0
 */
@interface WLWatchConnectivityManager : NSObject <WCSessionDelegate>

/**
 * Set and activate the Watch Connectivity session. Sould be invoked once from both the iPhone and Watch sides.
 */
+(void) startSharingSession;

@end


