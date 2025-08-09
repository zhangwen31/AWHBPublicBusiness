//
//  AWHBPBMaintenanceCostsTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMaintenanceCostsTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detailTextField;
@property(nonatomic,strong)UIButton *stateBtn;
@property(nonatomic,assign)NSUInteger maxLength;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIView *line2;
@property (nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
