//
//  AWHBPBFunctionNewView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnBtnTitleBlock)(NSString *title);
@interface AWHBPBFunctionNewView : UIView

@property (nonatomic, copy) ReturnBtnTitleBlock ReturnBtnTitleBlock;
//是否不使用轨迹
@property (nonatomic, assign) BOOL isNoUseLocus;
//是否不使用跟踪
@property (nonatomic, assign) BOOL isNoUseTrack;
//是否开启对讲
@property (nonatomic, assign) BOOL isStartIntercom;
//是否不使用视频
@property (nonatomic, assign) BOOL isNoUseVideo;

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
