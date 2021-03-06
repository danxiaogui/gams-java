/*  Java Native Interrface code generated by apiwrapper for GAMS Version 30.1.0
 *
 * GAMS - Loading mechanism for GAMS Expert-Level APIs
 *
 * Copyright (c) 2016-2020 GAMS Software GmbH <support@gams.com>
 * Copyright (c) 2016-2020 GAMS Development Corp. <support@gams.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* #include <locale.h> */
#include <palmcc.h>

/* at least for some JNI implementations, JNIEXPORT is not setup to
 * explicitly set visibility to default when using GNU compilers;
 * thus, we do this globally for all functions via this pragma
 *  (which is nicer than redefining JNIEXPORT)
 */
#ifdef __GNUC__
#pragma GCC visibility push(default)
#endif

typedef union foo { void *p; jlong i; } u64_t;

typedef char string255[256];

static JavaVM *Cached_JVM = NULL;
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved)
{
    Cached_JVM = vm;
    palInitMutexes();
    return JNI_VERSION_1_2;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved)
{
    palFiniMutexes();
}

/* Prototypes */
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetReady(JNIEnv *env, jobject obj, jobjectArray msg);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetReadyD(JNIEnv *env, jobject obj, jstring dirName, jobjectArray msg);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetReadyL(JNIEnv *env, jobject obj, jstring libName, jobjectArray msg);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_Create(JNIEnv *env, jobject obj, jobjectArray msg);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_CreateD(JNIEnv *env, jobject obj, jstring dirName, jobjectArray msg);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_CreateL(JNIEnv *env, jobject obj, jstring libName, jobjectArray msg);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_Free(JNIEnv *env, jobject obj);
JNIEXPORT void JNICALL Java_com_gams_api_palm_SetAuditLine(JNIEnv *env, jobject obj, jstring auditline);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_AuditRun(JNIEnv *env, jobject obj);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetAuditLine(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetCpr(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetVer(JNIEnv *env, jobject obj);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetRel(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetGold(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetCod(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetHdr(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetJul(JNIEnv *env, jobject obj);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetLicDat(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetBldCod(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetRelDat(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetRevision(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_IsBeta(JNIEnv *env, jobject obj);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_IsAlfa(JNIEnv *env, jobject obj);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetToday(JNIEnv *env, jobject obj);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetJulianDays(JNIEnv *env, jobject obj, jstring s);
JNIEXPORT void JNICALL Java_com_gams_api_palm_AuditFields(JNIEnv *env, jobject obj, jstring auditline, jobjectArray v1, jobjectArray v2, jobjectArray v3);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetShortAuditLine(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseReadU(JNIEnv *env, jobject obj, jstring filename, jobjectArray msg, jintArray rc);
JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseRegisterGAMS(JNIEnv *env, jobject obj, jint linenr, jstring liceline);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_LicenseGetLLine(JNIEnv *env, jobject obj, jint linenr, jobjectArray sst_result);
JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseRegisterGAMSDone(JNIEnv *env, jobject obj);
JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseRegisterSystem(JNIEnv *env, jobject obj, jint numcodes, jstring codes, jint magicnum);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseValidation(JNIEnv *env, jobject obj);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseSolverCheck(JNIEnv *env, jobject obj, jstring codes);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseSolverCheckSizes(JNIEnv *env, jobject obj, jstring codes, jint M, jint N, jint NZ, jint NLNZ, jint NDisc);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseCheck(JNIEnv *env, jobject obj, jint M, jint N, jint NZ, jint NLNZ, jint NDisc);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseGetMessage(JNIEnv *env, jobject obj, jobjectArray msg);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_PrintDemoMessage(JNIEnv *env, jobject obj, jobjectArray msg);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseIsGAMSCheckout(JNIEnv *env, jobject obj);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseIsAcademic(JNIEnv *env, jobject obj);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseCheckSubSys(JNIEnv *env, jobject obj, jstring codes);
JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseCheckSubX(JNIEnv *env, jobject obj, jstring sname, jstring codes, jintArray daysLeft);
JNIEXPORT jstring JNICALL Java_com_gams_api_palm_LicenseGetPlatform(JNIEnv *env, jobject obj, jobjectArray sst_result);
JNIEXPORT jint JNICALL Java_com_gams_api_palm_LicenseLevel(JNIEnv *env, jobject obj);
JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseLevelSet(JNIEnv *env, jobject obj, jint x);

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetReady(JNIEnv *env, jobject obj, jobjectArray msg)
{
   int rc_GetReady;
   jstring local_msg;
   char buffer_msg[256];
   rc_GetReady = palGetReady(buffer_msg, sizeof(buffer_msg));
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   return rc_GetReady;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetReadyD(JNIEnv *env, jobject obj, jstring dirName, jobjectArray msg)
{
   int rc_GetReadyD;
   char *local_dirName;
   jstring local_msg;
   char buffer_msg[256];
   buffer_msg[0] = '\0';
   local_dirName = (char *) (*env)->GetStringUTFChars(env, dirName, NULL);
   rc_GetReadyD = palGetReadyD(local_dirName, buffer_msg, sizeof(buffer_msg));
   (*env)->ReleaseStringUTFChars(env, dirName, local_dirName);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   return rc_GetReadyD;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetReadyL(JNIEnv *env, jobject obj, jstring libName, jobjectArray msg)
{
   int rc_GetReadyL;
   char *local_libName;
   jstring local_msg;
   char buffer_msg[256];
   buffer_msg[0] = '\0';
   local_libName = (char *) (*env)->GetStringUTFChars(env, libName, NULL);
   rc_GetReadyL = palGetReadyL(local_libName, buffer_msg, sizeof(buffer_msg));
   (*env)->ReleaseStringUTFChars(env, libName, local_libName);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   return rc_GetReadyL;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_Create(JNIEnv *env, jobject obj, jobjectArray msg)
{
   int rc_Create;
   jfieldID fid;
   u64_t ppal;
   jstring local_msg;
   char buffer_msg[256];
   jclass cls = (*env)->GetObjectClass(env, obj);
   buffer_msg[0] = '\0';
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_Create = palCreate((palHandle_t *)&ppal.p, buffer_msg, sizeof(buffer_msg));
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   (*env)->SetLongField(env, obj, fid, ppal.i);
   return rc_Create;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_CreateD(JNIEnv *env, jobject obj, jstring dirName, jobjectArray msg)
{
   int rc_CreateD;
   jfieldID fid;
   u64_t ppal;
   char *local_dirName;
   jstring local_msg;
   char buffer_msg[256];
   jclass cls = (*env)->GetObjectClass(env, obj);
   buffer_msg[0] = '\0';
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_dirName = (char *) (*env)->GetStringUTFChars(env, dirName, NULL);
   rc_CreateD = palCreateD((palHandle_t *)&ppal.p, local_dirName, buffer_msg, sizeof(buffer_msg));
   (*env)->ReleaseStringUTFChars(env, dirName, local_dirName);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   (*env)->SetLongField(env, obj, fid, ppal.i);
   return rc_CreateD;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_CreateL(JNIEnv *env, jobject obj, jstring libName, jobjectArray msg)
{
   int rc_CreateL;
   jfieldID fid;
   u64_t ppal;
   char *local_libName;
   jstring local_msg;
   char buffer_msg[256];
   jclass cls = (*env)->GetObjectClass(env, obj);
   buffer_msg[0] = '\0';
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_libName = (char *) (*env)->GetStringUTFChars(env, libName, NULL);
   rc_CreateL = palCreateL((palHandle_t *)&ppal.p, local_libName, buffer_msg, sizeof(buffer_msg));
   (*env)->ReleaseStringUTFChars(env, libName, local_libName);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   (*env)->SetLongField(env, obj, fid, ppal.i);
   return rc_CreateL;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_Free(JNIEnv *env, jobject obj)
{
   int rc_Free;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_Free = palFree((palHandle_t *)&ppal.p);
   (*env)->SetLongField(env, obj, fid, ppal.i);
   return rc_Free;
}


JNIEXPORT void JNICALL Java_com_gams_api_palm_SetAuditLine(JNIEnv *env, jobject obj, jstring auditline)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_auditline;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return ;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_auditline = (char *)(*env)->GetStringUTFChars(env, auditline, NULL);
   palSetAuditLine((palHandle_t)ppal.p, local_auditline);
   (*env)->ReleaseStringUTFChars(env, auditline, local_auditline);
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_AuditRun(JNIEnv *env, jobject obj)
{
   int rc_palAuditRun;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palAuditRun = palAuditRun((palHandle_t)ppal.p);
   return rc_palAuditRun;
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetAuditLine(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetAuditLine;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetAuditLine = palGetAuditLine((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetAuditLine);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetCpr(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetCpr;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetCpr = palGetCpr((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetCpr);
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetVer(JNIEnv *env, jobject obj)
{
   int rc_palGetVer;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palGetVer = palGetVer((palHandle_t)ppal.p);
   return rc_palGetVer;
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetRel(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetRel;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetRel = palGetRel((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetRel);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetGold(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetGold;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetGold = palGetGold((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetGold);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetCod(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetCod;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetCod = palGetCod((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetCod);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetHdr(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetHdr;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetHdr = palGetHdr((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetHdr);
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetJul(JNIEnv *env, jobject obj)
{
   int rc_palGetJul;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palGetJul = palGetJul((palHandle_t)ppal.p);
   return rc_palGetJul;
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetLicDat(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetLicDat;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetLicDat = palGetLicDat((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetLicDat);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetBldCod(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetBldCod;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetBldCod = palGetBldCod((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetBldCod);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetRelDat(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetRelDat;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetRelDat = palGetRelDat((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetRelDat);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetRevision(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetRevision;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetRevision = palGetRevision((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetRevision);
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_IsBeta(JNIEnv *env, jobject obj)
{
   int rc_palIsBeta;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palIsBeta = palIsBeta((palHandle_t)ppal.p);
   return rc_palIsBeta;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_IsAlfa(JNIEnv *env, jobject obj)
{
   int rc_palIsAlfa;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palIsAlfa = palIsAlfa((palHandle_t)ppal.p);
   return rc_palIsAlfa;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetToday(JNIEnv *env, jobject obj)
{
   int rc_palGetToday;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palGetToday = palGetToday((palHandle_t)ppal.p);
   return rc_palGetToday;
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_GetJulianDays(JNIEnv *env, jobject obj, jstring s)
{
   int rc_palGetJulianDays;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_s;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_s = (char *)(*env)->GetStringUTFChars(env, s, NULL);
   rc_palGetJulianDays = palGetJulianDays((palHandle_t)ppal.p, local_s);
   (*env)->ReleaseStringUTFChars(env, s, local_s);
   return rc_palGetJulianDays;
}

JNIEXPORT void JNICALL Java_com_gams_api_palm_AuditFields(JNIEnv *env, jobject obj, jstring auditline, jobjectArray v1, jobjectArray v2, jobjectArray v3)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_auditline;
   jstring local_v1;
   char buffer_v1[256];
   jstring local_v2;
   char buffer_v2[256];
   jstring local_v3;
   char buffer_v3[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return ;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_auditline = (char *)(*env)->GetStringUTFChars(env, auditline, NULL);
   buffer_v1[0] = '\0';
   buffer_v2[0] = '\0';
   buffer_v3[0] = '\0';
   palAuditFields((palHandle_t)ppal.p, local_auditline, buffer_v1, buffer_v2, buffer_v3);
   (*env)->ReleaseStringUTFChars(env, auditline, local_auditline);
   local_v1 = (*env)->NewStringUTF(env, buffer_v1);
   (*env)->SetObjectArrayElement(env, v1, 0, local_v1);
   local_v2 = (*env)->NewStringUTF(env, buffer_v2);
   (*env)->SetObjectArrayElement(env, v2, 0, local_v2);
   local_v3 = (*env)->NewStringUTF(env, buffer_v3);
   (*env)->SetObjectArrayElement(env, v3, 0, local_v3);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_GetShortAuditLine(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palGetShortAuditLine;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palGetShortAuditLine = palGetShortAuditLine((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palGetShortAuditLine);
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseReadU(JNIEnv *env, jobject obj, jstring filename, jobjectArray msg, jintArray rc)
{
   int rc_palLicenseReadU;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_filename;
   jstring local_msg;
   char buffer_msg[256];
   int *local_rc;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_filename = (char *)(*env)->GetStringUTFChars(env, filename, NULL);
   buffer_msg[0] = '\0';
   local_rc = (*env)->GetIntArrayElements(env, rc, NULL);
   rc_palLicenseReadU = palLicenseReadU((palHandle_t)ppal.p, local_filename, buffer_msg, local_rc);
   (*env)->ReleaseStringUTFChars(env, filename, local_filename);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   (*env)->ReleaseIntArrayElements(env, rc, local_rc, 0);
   return rc_palLicenseReadU;
}

JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseRegisterGAMS(JNIEnv *env, jobject obj, jint linenr, jstring liceline)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_liceline;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return ;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_liceline = (char *)(*env)->GetStringUTFChars(env, liceline, NULL);
   palLicenseRegisterGAMS((palHandle_t)ppal.p, linenr, local_liceline);
   (*env)->ReleaseStringUTFChars(env, liceline, local_liceline);
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_LicenseGetLLine(JNIEnv *env, jobject obj, jint linenr, jobjectArray sst_result)
{
   char *rc_palLicenseGetLLine;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palLicenseGetLLine = palLicenseGetLLine((palHandle_t)ppal.p, linenr, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palLicenseGetLLine);
}

JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseRegisterGAMSDone(JNIEnv *env, jobject obj)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return ;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   palLicenseRegisterGAMSDone((palHandle_t)ppal.p);
}

JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseRegisterSystem(JNIEnv *env, jobject obj, jint numcodes, jstring codes, jint magicnum)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_codes;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return ;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_codes = (char *)(*env)->GetStringUTFChars(env, codes, NULL);
   palLicenseRegisterSystem((palHandle_t)ppal.p, numcodes, local_codes, magicnum);
   (*env)->ReleaseStringUTFChars(env, codes, local_codes);
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseValidation(JNIEnv *env, jobject obj)
{
   int rc_palLicenseValidation;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palLicenseValidation = palLicenseValidation((palHandle_t)ppal.p);
   return rc_palLicenseValidation;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseSolverCheck(JNIEnv *env, jobject obj, jstring codes)
{
   int rc_palLicenseSolverCheck;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_codes;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_codes = (char *)(*env)->GetStringUTFChars(env, codes, NULL);
   rc_palLicenseSolverCheck = palLicenseSolverCheck((palHandle_t)ppal.p, local_codes);
   (*env)->ReleaseStringUTFChars(env, codes, local_codes);
   return rc_palLicenseSolverCheck;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseSolverCheckSizes(JNIEnv *env, jobject obj, jstring codes, jint M, jint N, jint NZ, jint NLNZ, jint NDisc)
{
   int rc_palLicenseSolverCheckSizes;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_codes;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_codes = (char *)(*env)->GetStringUTFChars(env, codes, NULL);
   rc_palLicenseSolverCheckSizes = palLicenseSolverCheckSizes((palHandle_t)ppal.p, local_codes, M, N, NZ, NLNZ, NDisc);
   (*env)->ReleaseStringUTFChars(env, codes, local_codes);
   return rc_palLicenseSolverCheckSizes;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseCheck(JNIEnv *env, jobject obj, jint M, jint N, jint NZ, jint NLNZ, jint NDisc)
{
   int rc_palLicenseCheck;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palLicenseCheck = palLicenseCheck((palHandle_t)ppal.p, M, N, NZ, NLNZ, NDisc);
   return rc_palLicenseCheck;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseGetMessage(JNIEnv *env, jobject obj, jobjectArray msg)
{
   int rc_palLicenseGetMessage;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_msg;
   char buffer_msg[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_msg[0] = '\0';
   rc_palLicenseGetMessage = palLicenseGetMessage((palHandle_t)ppal.p, buffer_msg, 256);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   return rc_palLicenseGetMessage;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_PrintDemoMessage(JNIEnv *env, jobject obj, jobjectArray msg)
{
   int rc_palPrintDemoMessage;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_msg;
   char buffer_msg[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_msg[0] = '\0';
   rc_palPrintDemoMessage = palPrintDemoMessage((palHandle_t)ppal.p, buffer_msg, 256);
   local_msg = (*env)->NewStringUTF(env, buffer_msg);
   (*env)->SetObjectArrayElement(env, msg, 0, local_msg);
   return rc_palPrintDemoMessage;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseIsGAMSCheckout(JNIEnv *env, jobject obj)
{
   int rc_palLicenseIsGAMSCheckout;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palLicenseIsGAMSCheckout = palLicenseIsGAMSCheckout((palHandle_t)ppal.p);
   return rc_palLicenseIsGAMSCheckout;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseIsAcademic(JNIEnv *env, jobject obj)
{
   int rc_palLicenseIsAcademic;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   rc_palLicenseIsAcademic = palLicenseIsAcademic((palHandle_t)ppal.p);
   return rc_palLicenseIsAcademic;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseCheckSubSys(JNIEnv *env, jobject obj, jstring codes)
{
   int rc_palLicenseCheckSubSys;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_codes;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_codes = (char *)(*env)->GetStringUTFChars(env, codes, NULL);
   rc_palLicenseCheckSubSys = palLicenseCheckSubSys((palHandle_t)ppal.p, local_codes);
   (*env)->ReleaseStringUTFChars(env, codes, local_codes);
   return rc_palLicenseCheckSubSys;
}

JNIEXPORT jboolean JNICALL Java_com_gams_api_palm_LicenseCheckSubX(JNIEnv *env, jobject obj, jstring sname, jstring codes, jintArray daysLeft)
{
   int rc_palLicenseCheckSubX;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   char *local_sname;
   char *local_codes;
   int *local_daysLeft;
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   local_sname = (char *)(*env)->GetStringUTFChars(env, sname, NULL);
   local_codes = (char *)(*env)->GetStringUTFChars(env, codes, NULL);
   local_daysLeft = (*env)->GetIntArrayElements(env, daysLeft, NULL);
   rc_palLicenseCheckSubX = palLicenseCheckSubX((palHandle_t)ppal.p, local_sname, local_codes, local_daysLeft);
   (*env)->ReleaseStringUTFChars(env, sname, local_sname);
   (*env)->ReleaseStringUTFChars(env, codes, local_codes);
   (*env)->ReleaseIntArrayElements(env, daysLeft, local_daysLeft, 0);
   return rc_palLicenseCheckSubX;
}

JNIEXPORT jstring JNICALL Java_com_gams_api_palm_LicenseGetPlatform(JNIEnv *env, jobject obj, jobjectArray sst_result)
{
   char *rc_palLicenseGetPlatform;
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   jstring local_sst;
   char buffer_sst[256];
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return NULL;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   buffer_sst[0] = '\0';
   rc_palLicenseGetPlatform = palLicenseGetPlatform((palHandle_t)ppal.p, buffer_sst);
   local_sst = (*env)->NewStringUTF(env, buffer_sst);
   (*env)->SetObjectArrayElement(env, sst_result, 0, local_sst);
   return (*env)->NewStringUTF(env, rc_palLicenseGetPlatform);
}

JNIEXPORT jint JNICALL Java_com_gams_api_palm_LicenseLevel(JNIEnv *env, jobject obj)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return 0;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   return palLicenseLevel((palHandle_t)ppal.p);
}

JNIEXPORT void JNICALL Java_com_gams_api_palm_LicenseLevelSet(JNIEnv *env, jobject obj, jint x)
{
   jfieldID fid;
   u64_t ppal;
   jclass cls = (*env)->GetObjectClass(env, obj);
   fid = (*env)->GetFieldID(env, cls, "palPtr", "J");
   if (fid == NULL) return;
   ppal.i = (*env)->GetLongField(env, obj, fid);
   palLicenseLevelSet((palHandle_t)ppal.p, x);
}
