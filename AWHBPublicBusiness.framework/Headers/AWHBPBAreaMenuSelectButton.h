//
//  AWHBPBAreaMenuSelectButton.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAreaMenuSelectButton : UIButton

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIColor *titleColor;

@property (nonatomic, strong) UIImage *leftImage;

@property (nonatomic, strong) UIImage *leftSelectImage;

@property (nonatomic, assign) BOOL isSelect;

@end

NS_ASSUME_NONNULL_END
