//
//  AWHBPBHistoryThresholdSetView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBHistoryThresholdSetView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,strong)NSArray *detailLabArr;
@property (nonatomic, copy) NSString *filter;//静止点
@property (nonatomic, copy) NSString *filterInvalid;//过滤无效定位
@property (nonatomic, copy) NSString *filterAppend;//过滤补报
@property(nonatomic,copy)NSString *speedThreshold;//速度阈值
@property(nonatomic,copy)NSString *parkingThreshold;//停车阈值

@end

NS_ASSUME_NONNULL_END
