//
//  IMAAd.h
//  InteractiveMediaAds
//
//  Represents metadata of a single ad.

#import <Foundation/Foundation.h>

@class IMAAdBreakInfo;
@class IMACompanion;

/**
 *  Data object representation of a single ad.
 */
@interface IMAAd : NSObject

/**
 *  The ad ID as specified in the VAST response.
 */
@property(nonatomic, copy, readonly) NSString *adID;

/**
 *  The ad title from the VAST response.
 */
@property(nonatomic, copy, readonly) NSString *adTitle;

/**
 *  The ad system from the VAST response.
 */
@property(nonatomic, copy, readonly) NSString *adSystem;

/**
 *  The ad description.
 */
@property(nonatomic, copy, readonly) NSString *adDescription;

/**
 *  The duration of the ad.
 */
@property(nonatomic, readonly) NSTimeInterval duration;

/**
 *  The position of the current ad in this ad break.
 */
@property(nonatomic, readonly) NSInteger adPosition;

/**
 *  Set of ad break properties.
 */
@property(nonatomic, strong, readonly) IMAAdBreakInfo *adBreakInfo;

/**
 *  The companion ads specified in the VAST response.
 */
@property(nonatomic, copy, readonly) NSArray<IMACompanion *> *companions;

- (instancetype)init NS_UNAVAILABLE;

@end
