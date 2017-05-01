#pragma once
#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <assimp/Importer.hpp>      // �������ڸ�ͷ�ļ��ж���
#include <assimp/scene.h>           // ��ȡ����ģ�����ݶ�����scene��
#include <assimp/postprocess.h>     // ��ͷ�ļ��а�������ı�־λ����
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
#include <tchar.h>
#include "math_tools.hpp"
#include "vector3.hpp"
using Color = Vector3;
struct Vertex {
	Vector3 Position;
	Vector3 Normal;
};
#include "Ray.hpp"
#include "AABB.hpp"
#include "model.hpp"
#include "imageio.hpp"
#include "camera.hpp"
#include "IntersectTriangle.hpp"
#include "KDTree.hpp"
#include <time.h>
#include <thread>