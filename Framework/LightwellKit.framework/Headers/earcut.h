//
//  Earcut.h
//  LightwellKit
//
//  Created by Mike Jaoudi on 9/17/18.
//

#pragma once

typedef enum {
    FillRuleNonZero_CBridge,
    FillRuleEvenOdd_CBridge,
} FillRule_CBridge;

typedef struct {
    int* indicies;
    int count;
} IndexList_CBridge;

typedef struct {
    float* points;
    int count;
} Polygon_CBridge;

// A PolygonGroup is a list of polygons where the first polygon is the subject and the remaining polygons are the clips
typedef struct {
    Polygon_CBridge *_polygons;
    int count;
} PolygonGroup_CBridge;

// A PolygonGroupList is a list of polygon groups
typedef struct {
    PolygonGroup_CBridge *_polygonGroups;
    int count;
} PolygonGroupList_CBridge;

IndexList_CBridge triangulate(Polygon_CBridge polygons[], int length);
PolygonGroupList_CBridge clip(Polygon_CBridge polygons[], int length, FillRule_CBridge fillRule);
