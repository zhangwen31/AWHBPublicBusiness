//
//  AWHBPBSelectedDropView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectedDropView : UIView

@property (nonatomic, strong) UIColor *selectColor;

@property (nonatomic, strong) UIColor *defaultColor;

@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic, assign) CGFloat viewWidth;

@end

NS_ASSUME_NONNULL_END
