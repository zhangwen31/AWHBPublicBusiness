//
//  AWHBPBAreaMenuButton.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/28.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAreaMenuButton : UIButton

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIColor *titleColor;

@property (nonatomic, strong) UIImage *leftImage;

@property (nonatomic, strong) AWHBPBCustomDataModel *model;

- (CGFloat)getWidth;

@end

NS_ASSUME_NONNULL_END
