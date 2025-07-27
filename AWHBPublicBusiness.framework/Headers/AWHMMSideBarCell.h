//
//  AWHMMSideBarCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2023/8/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHMMSideBarCell : UITableViewCell

@property(nonatomic,strong)UIImageView *imgView;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UILabel *rightLab;
@property(nonatomic,strong)UIImageView *rightImgView;
@property(nonatomic,assign)BOOL isHiddenRightImg;

@end

NS_ASSUME_NONNULL_END
