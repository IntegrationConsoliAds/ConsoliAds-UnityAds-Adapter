//
//  AdNetwork.h
//  ConsoliAdsMediation
//
//  Created by FazalElahi on 15/10/2018.
//  Copyright © 2018 ConsoliAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ConsoliAdsMediationDelegate.h"
#import "ConsoliAdsMediationIconAdDelegate.h"
#import "CAAdNetworkDelegate.h"
#import "CAMediatedBannerView.h"
#import "CAMediationConstants.h"

NS_ASSUME_NONNULL_BEGIN

@class CAMediatedBannerView;
@class ConsoliAdsMediation;

@interface AdNetwork : NSObject {
    BOOL _isInitialized;
}

@property (nonatomic , weak) id<CAAdNetworkDelegate> caDelegate;

@property(nonatomic) BOOL isInitialized;

@property (nonatomic , retain) NSMutableDictionary *adIDs;

@property(nonatomic) RequestState isAdLoaded;

@property(nonatomic) BannerSize bannerSize;

@property(nonatomic) PlaceholderName shownForPlaceholder;

- (BOOL)isValidAdID:(NSString*)adID;

-(void)runOnUIThread:(void (^)(void))completionHandler;

- (void)updateHastable:(CAMediatedBannerView*)mediatedBannerView;

- (CGRect)getBannerFrameWithSize:(BannerSize)adSize position:(BannerPosition)adPosition viewSize:(CGSize)viewSize;

@end

NS_ASSUME_NONNULL_END
