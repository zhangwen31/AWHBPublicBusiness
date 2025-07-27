//
//  AWHBPBCaringModelTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCaringModelTableViewCell : UITableViewCell

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIImageView *leftImageView;
@property (nonatomic, strong) UILabel *subTitleLabel;
/// 条件说明
@property (nonatomic, strong) UILabel *conditionsLabel;

@property (nonatomic, strong) UIView *progressView;
/// 是否展示条件说明
@property (nonatomic, assign) BOOL isShowConditions;
/// 进度 满进度100
@property (nonatomic, assign) CGFloat progress;


@end

NS_ASSUME_NONNULL_END
