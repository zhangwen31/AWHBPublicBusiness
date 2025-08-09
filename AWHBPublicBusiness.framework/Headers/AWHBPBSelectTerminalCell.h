//
//  AWHBPBSelectTerminalCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectTerminalCell : UITableViewCell

@property (nonatomic, strong) UILabel *identificationLabel;
@property (nonatomic, strong) UILabel *simLabel;
@property (nonatomic, strong) UILabel *numberLabel;
@property (nonatomic, assign) BOOL isSelected;

@end

NS_ASSUME_NONNULL_END
