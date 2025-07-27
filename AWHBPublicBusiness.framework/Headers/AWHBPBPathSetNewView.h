//
//  AWHBPBPathSetNewView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBPathSetChangeColorBlock)(void);
typedef void(^AWHBPBPathSetLineWidthBlock)(NSInteger sliderValue);

@interface AWHBPBPathSetNewView : UIView

@property(nonatomic,strong)UIButton *colorBtn;
@property(nonatomic,copy)AWHBPBPathSetChangeColorBlock ChangeColorBlock;
@property(nonatomic,copy)AWHBPBPathSetLineWidthBlock GetLineWidthValue;

@end

NS_ASSUME_NONNULL_END
