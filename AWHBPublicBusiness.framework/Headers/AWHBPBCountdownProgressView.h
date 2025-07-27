//
//  AWHBPBCountdownProgressView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCountdownProgressView : UIView

/**进度条颜色*/
@property (strong, nonatomic) UIColor *progressColor;

/**进度条颜色背景颜色*/
@property (strong, nonatomic) UIColor *progressBackColor;
/**dash pattern*/
@property (strong, nonatomic) NSArray *lineDashPattern;
/**进度Label字体*/
@property (strong, nonatomic) UIFont  *progressFont;
/**进度条线宽度*/
@property (assign, nonatomic) CGFloat progressWidth;
/**是否显示进度Label  默认显示*/
@property (assign, nonatomic) BOOL isShowProgressLabel;

/**满进度 100**/
- (void)updateProgress:(CGFloat)progress;

@end

NS_ASSUME_NONNULL_END
