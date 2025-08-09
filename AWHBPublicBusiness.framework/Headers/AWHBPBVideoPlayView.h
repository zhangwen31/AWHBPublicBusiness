//
//  AWHBPBVideoPlayView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBVideoPlayView : UIView

@property (nonatomic ,strong) NSURL *preVideoURL;   //视频预览（存储）地址
//关闭
@property (nonatomic, copy) void (^closeBlock)(void);
//完成
@property (nonatomic, copy) void (^finishBlock)(NSURL *preVideoURL);
//播放
- (void)play;
//暂停
- (void)pause;

@end

NS_ASSUME_NONNULL_END
