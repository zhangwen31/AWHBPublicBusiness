//
//  AWHBPBRangeStatisticsCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/19.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBRangeStatisticsCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UILabel *numLab;
@property(nonatomic,strong)UIImageView *leftImageView;
@property (nonatomic, assign) AWHBPBDetailsLineType type;

@end

NS_ASSUME_NONNULL_END
