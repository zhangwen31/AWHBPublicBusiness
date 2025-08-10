//
//  AWHBPBFunctionSelectView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/6/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBFunctionSelectView : UIView

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, copy) void (^selectFunctionClick)(NSString *name);

@end

NS_ASSUME_NONNULL_END
