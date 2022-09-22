//
//  CADelegate.h
//  ConsoliAdsMediation
//
//  Created by OsamaNadeem on 12/22/21.
//  Copyright © 2021 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CAMediatedBannerView.h"
#import "CANativeAdRequestDelegate.h"
#import "MediationInAppError.h"
#import "MediationInAppDetails.h"


@class AdNetwork;

@protocol CAAdNetworkDelegate <NSObject>

- (void)SaveAdNetworkRequest:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdLoadFailed:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdLoadSuccess:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdShowSuccess:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdShowFailed:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdClosed:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdClick:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnAdCompleted:(AdNetwork *_Nonnull)adNetwork;//

- (void)caOnRewardedVideoAdCompleted:(AdNetwork *_Nonnull)adNetwork;//

//AppOpenAd
- (void)caOnAppOpenAdLoadFailed:(AdNetwork *_Nonnull)adNetwork orientation:(UIInterfaceOrientation)orientation;

- (void)caOnAppOpenAdLoadSuccess:(AdNetwork *_Nonnull)adNetwork;

- (void)caOnAppOpenAdShowSuccess:(AdNetwork *_Nonnull)adNetwork;

- (void)caOnAppOpenAdClosed:(AdNetwork *_Nonnull)adNetwork;

- (void)caOnAppOpenAdShowFailed:(AdNetwork *_Nonnull)adNetwork;
//

//Banner
- (void)caOnBannerAdLoadFailed:(AdNetwork *_Nonnull)adNetwork mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBanner viewController:(UIViewController*_Nonnull)viewController;

- (void)caOnBannerAdClose:(AdNetwork *_Nonnull)adNetwork bannerView:(CAMediatedBannerView*_Nonnull)bannerView;

- (void)caOnBannerAdLoadSuccess:(AdNetwork *_Nonnull)adNetwork mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBanner refreshed:(BOOL)isRefresh;

- (void)caOnBannerAdClick:(AdNetwork *_Nonnull)adNetwork mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBannerView;

- (void)caOnBannerAdClickWithProdId:(int)adNetworkName mediatedAd:(CAMediatedBannerView*_Nonnull)mediatedBannerView featureId:(NSString *_Nullable)featureId;

//

- (void)caOnNativeLoadFailed:(AdNetwork *_Nonnull)adNetwork viewController:(UIViewController*_Nonnull)viewController delegate:(nonnull id<CANativeAdRequestDelegate>)delegate;

- (void)caChangeAdNetworkLoadState:(AdNetwork*_Nonnull)adNetwork state:(int)adNetworkState;

- (void)caOnAdClickWithProdId:(int)adNetworkName format:(int)format featureId:(NSString *_Nullable)featureId;

- (void)caInAppPurchaseSuccess:(MediationInAppDetails*_Nonnull)product;

- (void)caInAppPurchaseFailed:(MediationInAppError*_Nonnull)error;

- (void)caInAppPurchaseRestored:(MediationInAppDetails*_Nonnull)product;;

-(void) caOnIconAdRefresh;

- (void)caOnRewardedInterstitialAdLoaded:(PlaceholderName)placeholderName;

- (void)caOnRewardedInterstitialAdFailToLoad:(PlaceholderName)placeholderName;

- (void)caOnRewardedInterstitialAdShown:(PlaceholderName)placeholderName;

- (void)caOnRewardedInterstitialAdCompleted:(PlaceholderName)placeholderName;

- (void)caOnRewardedInterstitialAdClicked:(NSString *_Nonnull)featureId;

- (void)caOnRewardedInterstitialAdFailToShow:(PlaceholderName)placeholderName;

- (void)caOnRewardedInterstitialAdClosed:(PlaceholderName)placeholderName;

@end


