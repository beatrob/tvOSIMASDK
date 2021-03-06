//
//  IMAAVPlayerVideoDisplay.h
//  InteractiveMediaAds
//
//  Declares an object that reuses an AVPlayer for stream playback

#import <UIKit/UIKit.h>

#import "IMAVideoDisplay.h"

@class AVPlayer;

/**
 *  The key for subtitle language.
 */
extern NSString *const kIMASubtitleLanguage;

/**
 *  The key for the WebVTT sidecar subtitle URL.
 */
extern NSString *const kIMASubtitleWebVTT;

/**
 *  The key for the TTML sidecar subtitle URL.
 */
extern NSString *const kIMASubtitleTTML;

/**
 *  An implementation of the IMAVideoDisplay protocol. This object is intended
 *  to be initialized with the content player. The SDK will use this player to play the stream.
 */
@interface IMAAVPlayerVideoDisplay : NSObject <IMAVideoDisplay>

/**
 *  The player used for stream playback.
 */
@property(nonatomic, strong, readonly) AVPlayer *player;

/**
 *  The subtitles for the current stream. Will be nil until the stream starts playing.
 */
@property(nonatomic, strong, readonly) NSArray <NSDictionary *> *subtitles;

/**
 *  Creates an IMAAVPlayerVideoDisplay that will play the stream in the passed in video player.
 *
 *  @param player The AVPlayer instance used for playing the stream
 *
 *  @return An IMAAVPlayerVideoDisplay instance
 */
- (instancetype)initWithAVPlayer:(AVPlayer *)player;

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Resets the IMAAVPlayerVideoDisplay and removes any observers on the player item.
 */
- (void)reset;

@end
