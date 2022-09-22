//
//  MediationInAppDetails.h
//  ConsoliAd
//
//  Created by saira on 18/12/2020.
//  Copyright © 2020 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MediationInAppDetails : NSObject

typedef enum : NSUInteger {
    
    GCAInterstitialAd,
    GCAVideoAd,
    GCARewardedAd,
    GCABannerAd,
    GCAConsoliAdsIconAd,
    GCANative,
    GCAConsoliAdsImmersiveAd,

} MediationAdType;



@property(nonatomic) NSString *localizedDescription;

@property(nonatomic) NSString *localizedTitle;

@property(nonatomic) NSDecimalNumber *price;

@property(nonatomic) NSLocale *priceLocale;

@property(nonatomic) NSString *productIdentifier;

@property (nonatomic) MediationAdType adType;

@property(nonatomic) NSString* scene;

-(MediationInAppDetails*)initWithDetails:(NSString*)localizedDescription localizedTitle:(NSString*)localizedTitle price:(NSDecimalNumber*)price priceLocale:(NSLocale*)priceLocale productIdentifier:(NSString*)productIdentifier adType:(NSUInteger*)adType scene:(NSString*)scene;

@end

NS_ASSUME_NONNULL_END
