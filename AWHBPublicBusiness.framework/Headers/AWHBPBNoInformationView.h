//
//  AWHBPBNoInformationView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBNoInformationView : UIView

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) UIButton *selectCarBut;

@property (nonatomic, copy) void (^selectCarClick)(void);

@end

NS_ASSUME_NONNULL_END
