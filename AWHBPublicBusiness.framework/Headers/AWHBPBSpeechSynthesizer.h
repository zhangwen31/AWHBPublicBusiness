//
//  AWHBPBSpeechSynthesizer.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSpeechSynthesizer : NSObject
+ (instancetype)sharedSpeechSynthesizer;

- (void)speakString:(NSString *)string;

- (void)stopSpeak;
@end

NS_ASSUME_NONNULL_END
