//
//  AWHBPBMapRimListTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^NavBtnBlock)(NSString *str);
@interface AWHBPBMapRimListTableViewCell : UITableViewCell
@property(strong,nonatomic)UILabel *nameLab;
@property(strong,nonatomic)UILabel *addrLab;
@property(strong,nonatomic)UILabel *mileLab;
@property(strong,nonatomic)UIButton *navBtn;
@property(strong,nonatomic)UIButton *phoBtn;
@property(copy,nonatomic)NavBtnBlock NavBtnBlock;
@end

NS_ASSUME_NONNULL_END
