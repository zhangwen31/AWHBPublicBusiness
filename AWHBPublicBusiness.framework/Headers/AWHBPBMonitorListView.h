//
//  AWHBPBMonitorListView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnIndexPathRowBlock)(NSInteger row);
@interface AWHBPBMonitorListView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)UILabel *allCarLab;
@property(nonatomic,strong)NSMutableArray *carMapArray;//存放车辆信息model
@property(nonatomic,copy)ReturnIndexPathRowBlock ReturnIndexPathRowBlock;

@end

NS_ASSUME_NONNULL_END
