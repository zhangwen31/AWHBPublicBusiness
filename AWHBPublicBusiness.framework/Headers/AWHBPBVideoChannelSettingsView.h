//
//  AWHBPBVideoChannelSettingsView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SelectVideoChannelSettingBlock)(NSDictionary *channelDict, NSArray *logicalChannelArray);

@interface AWHBPBVideoChannelSettingsView : UIView

/**
 * 标题 默认 视频通道设置
 */
@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIButton *leftBut;

@property (nonatomic, strong) UIButton *rightBut;

@property (nonatomic, copy) void (^leftBlock)(void);

@property (nonatomic, copy) SelectVideoChannelSettingBlock selectVideoChannelSettingBlock;

- (void)close;

- (void)setupVideoChannelNum:(NSUInteger)num channelDict:(NSDictionary *)channelDict logicalChannelArray:(NSArray *)logicalChannelArray;

@end

NS_ASSUME_NONNULL_END
