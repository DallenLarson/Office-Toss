using System;
using UnityEngine;

namespace UnityEngine.XR.VisionOS
{
    /// <summary>
    /// Managed type for MTLVertexFormat, defined in MTLVertexDescriptor.h
    /// </summary>
    enum MTLVertexFormat
    {
        MTLVertexFormatInvalid = 0,

        MTLVertexFormatUChar2 = 1,
        MTLVertexFormatUChar3 = 2,
        MTLVertexFormatUChar4 = 3,

        MTLVertexFormatChar2 = 4,
        MTLVertexFormatChar3 = 5,
        MTLVertexFormatChar4 = 6,

        MTLVertexFormatUChar2Normalized = 7,
        MTLVertexFormatUChar3Normalized = 8,
        MTLVertexFormatUChar4Normalized = 9,

        MTLVertexFormatChar2Normalized = 10,
        MTLVertexFormatChar3Normalized = 11,
        MTLVertexFormatChar4Normalized = 12,

        MTLVertexFormatUShort2 = 13,
        MTLVertexFormatUShort3 = 14,
        MTLVertexFormatUShort4 = 15,

        MTLVertexFormatShort2 = 16,
        MTLVertexFormatShort3 = 17,
        MTLVertexFormatShort4 = 18,

        MTLVertexFormatUShort2Normalized = 19,
        MTLVertexFormatUShort3Normalized = 20,
        MTLVertexFormatUShort4Normalized = 21,

        MTLVertexFormatShort2Normalized = 22,
        MTLVertexFormatShort3Normalized = 23,
        MTLVertexFormatShort4Normalized = 24,

        MTLVertexFormatHalf2 = 25,
        MTLVertexFormatHalf3 = 26,
        MTLVertexFormatHalf4 = 27,

        MTLVertexFormatFloat = 28,
        MTLVertexFormatFloat2 = 29,
        MTLVertexFormatFloat3 = 30,
        MTLVertexFormatFloat4 = 31,

        MTLVertexFormatInt = 32,
        MTLVertexFormatInt2 = 33,
        MTLVertexFormatInt3 = 34,
        MTLVertexFormatInt4 = 35,

        MTLVertexFormatUInt = 36,
        MTLVertexFormatUInt2 = 37,
        MTLVertexFormatUInt3 = 38,
        MTLVertexFormatUInt4 = 39,

        MTLVertexFormatInt1010102Normalized = 40,
        MTLVertexFormatUInt1010102Normalized = 41,

        MTLVertexFormatUChar4Normalized_BGRA = 42,

        MTLVertexFormatUChar = 45,
        MTLVertexFormatChar = 46,
        MTLVertexFormatUCharNormalized = 47,
        MTLVertexFormatCharNormalized = 48,

        MTLVertexFormatUShort = 49,
        MTLVertexFormatShort = 50,
        MTLVertexFormatUShortNormalized = 51,
        MTLVertexFormatShortNormalized = 52,

        MTLVertexFormatHalf = 53,

        MTLVertexFormatFloatRG11B10 = 54,
        MTLVertexFormatFloatRGB9E5 = 55
    }
}
