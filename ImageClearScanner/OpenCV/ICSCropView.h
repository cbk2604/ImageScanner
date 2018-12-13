//
//  ICSCropView.h
//  ImageClearScanner
//
//  Created by Bharghav on 11/12/18.
//  Copyright © 2018 SSS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICSGeometry.h"

NS_ASSUME_NONNULL_BEGIN

@interface ICSCropView : UIView {
    CGPoint touchOffset;
    CGPoint a;
    CGPoint b;
    CGPoint c;
    CGPoint d;
    
    //middle
    CGPoint e,f,g,h;
    
    BOOL frameMoved,middlePoint;
    int currentIndex,previousIndex;
    int k;
    
}
@property (nonatomic, strong) UIView *activePoint;

@property (strong, nonatomic) UIView *pointD;
@property (strong, nonatomic) UIView *pointC;
@property (strong, nonatomic) UIView *pointB;
@property (strong, nonatomic) UIView *pointA;
//middle points
@property (strong, nonatomic) UIView *pointE,*pointF,*pointG,*pointH;
@property (nonatomic, strong) NSMutableArray *points;


- (BOOL)frameEdited;
- (void)resetFrame;
- (CGPoint)coordinatesForPoint: (int)point withScaleFactor: (CGFloat)scaleFactor;

- (void)bottomLeftCornerToCGPoint: (CGPoint)point;
- (void)bottomRightCornerToCGPoint: (CGPoint)point;
- (void)topRightCornerToCGPoint: (CGPoint)point;
- (void)topLeftCornerToCGPoint: (CGPoint)point;


-(void)checkangle:(int)index;
-(void)findPointAtLocation:(CGPoint)location;
- (void)moveActivePointToLocation:(CGPoint)locationPoint;

@end

NS_ASSUME_NONNULL_END
