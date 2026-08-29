//
//  AWHBPBSelectFunctionImageCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/3/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectFunctionImageCell : UITableViewCell

@property(nonatomic, strong) UIImageView *leftImageView;

@property(nonatomic, strong) UILabel *titleLab;

@property(nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
