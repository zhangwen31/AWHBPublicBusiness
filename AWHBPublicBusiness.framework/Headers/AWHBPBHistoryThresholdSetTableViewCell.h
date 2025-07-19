//
//  AWHBPBHistoryThresholdSetTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBHistoryThresholdSetTableViewCell : UITableViewCell
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detailTextField;
@property(nonatomic,assign)NSUInteger detailLength;
@property(nonatomic,assign)NSUInteger maxNum;
@property(nonatomic,assign)NSUInteger minNum;
@property(nonatomic,strong)UILabel *detailLab;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIImageView *pzImageView;
@property (nonatomic, assign) BOOL isHiddenLine;
@end

NS_ASSUME_NONNULL_END
