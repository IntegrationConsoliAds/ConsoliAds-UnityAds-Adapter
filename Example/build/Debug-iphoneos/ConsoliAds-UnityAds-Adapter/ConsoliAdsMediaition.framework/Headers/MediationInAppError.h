//
//  MediationInAppError.h
//  ConsoliAd
//
//  Created by saira on 21/12/2020.
//  Copyright © 2020 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MediationInAppError.h"
#import "MediationInAppDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface MediationInAppError : NSObject

@property (nonatomic) MediationAdType adType;
@property(nonatomic,) NSError *error;
@property(nonatomic) NSString* scene;

-(MediationInAppError*) initWithError:(NSError*)error type:(NSUInteger*)adType scene:(NSString*)scene;

@end

NS_ASSUME_NONNULL_END
