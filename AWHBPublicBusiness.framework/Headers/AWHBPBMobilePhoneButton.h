//
//  AWHBPBMobilePhoneButton.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMobilePhoneButton : UIButton

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIColor *titleColor;

@property (nonatomic, assign) NSInteger numberOfLines;

@property (nonatomic, strong) UIFont *titleFont;

@property (nonatomic, strong) UIImage *leftImage;

- (CGFloat)getWidth;

@end

NS_ASSUME_NONNULL_END
