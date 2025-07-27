//
//  AWHBPBRealTimeInforView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBRealTimeInforView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *deatilArr;

@end

NS_ASSUME_NONNULL_END
