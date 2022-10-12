//
//  AWHBPBFunctionView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/5/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnBtnTitleBlock)(NSString *title);
@interface AWHBPBFunctionView : UIView

@property (nonatomic, copy) ReturnBtnTitleBlock ReturnBtnTitleBlock;
//隐藏轨迹
@property (nonatomic, assign) BOOL isHiddenLocus;
//隐藏跟踪
@property (nonatomic, assign) BOOL isHiddenTrack;

@property (nonatomic, assign) BOOL isVideo;

@end

NS_ASSUME_NONNULL_END
