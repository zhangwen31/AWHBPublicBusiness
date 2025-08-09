//
//  AWHBPBTerminalBindCarCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTerminalBindCarCell : UITableViewCell

@property (nonatomic, strong) UILabel *carPlateLabel;
@property (nonatomic, strong) UILabel *carNameLabel;
@property (nonatomic, assign) BOOL isSelected;

@end

NS_ASSUME_NONNULL_END
