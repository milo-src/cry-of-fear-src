
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cef90 <.text+0xcdf90>:
100cef90:	55                   	push   ebp
100cef91:	8b ec                	mov    ebp,esp
100cef93:	83 ec 0c             	sub    esp,0xc
100cef96:	56                   	push   esi
100cef97:	8b f1                	mov    esi,ecx
100cef99:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cef9c:	c7 80 08 01 00 00 05 	mov    DWORD PTR [eax+0x108],0x5
100cefa3:	00 00 00 
100cefa6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cefa9:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
100cefae:	f3 0f 58 05 b8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1eb8
100cefb5:	10 
100cefb6:	f3 0f 11 40 54       	movss  DWORD PTR [eax+0x54],xmm0
100cefbb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cefbe:	83 c0 50             	add    eax,0x50
100cefc1:	50                   	push   eax
100cefc2:	e8 59 a3 04 00       	call   0x10119320
100cefc7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cefca:	6a 19                	push   0x19
100cefcc:	68 ff 00 00 00       	push   0xff
100cefd1:	83 c0 08             	add    eax,0x8
100cefd4:	68 34 2f 22 10       	push   0x10222f34
100cefd9:	50                   	push   eax
100cefda:	e8 41 a6 04 00       	call   0x10119620
100cefdf:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100cefe5:	f3 0f 10 1d 04 1f 1a 	movss  xmm3,DWORD PTR ds:0x101a1f04
100cefec:	10 
100cefed:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ceff0:	6a 19                	push   0x19
100ceff2:	f3 0f 10 51 2c       	movss  xmm2,DWORD PTR [ecx+0x2c]
100ceff7:	f3 0f 10 49 30       	movss  xmm1,DWORD PTR [ecx+0x30]
100ceffc:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100cf001:	f3 0f 59 d3          	mulss  xmm2,xmm3
100cf005:	68 ff 00 00 00       	push   0xff
100cf00a:	f3 0f 59 cb          	mulss  xmm1,xmm3
100cf00e:	68 34 2f 22 10       	push   0x10222f34
100cf013:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
100cf018:	f3 0f 59 c3          	mulss  xmm0,xmm3
100cf01c:	f3 0f 58 48 10       	addss  xmm1,DWORD PTR [eax+0x10]
100cf021:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
100cf026:	8d 45 f4             	lea    eax,[ebp-0xc]
100cf029:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100cf02e:	50                   	push   eax
100cf02f:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100cf034:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100cf039:	e8 e2 a5 04 00       	call   0x10119620
100cf03e:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100cf044:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf047:	f3 0f 10 25 04 1f 1a 	movss  xmm4,DWORD PTR ds:0x101a1f04
100cf04e:	10 
100cf04f:	6a 19                	push   0x19
100cf051:	f3 0f 10 41 2c       	movss  xmm0,DWORD PTR [ecx+0x2c]
100cf056:	f3 0f 10 58 0c       	movss  xmm3,DWORD PTR [eax+0xc]
100cf05b:	f3 0f 10 49 28       	movss  xmm1,DWORD PTR [ecx+0x28]
100cf060:	f3 0f 10 50 10       	movss  xmm2,DWORD PTR [eax+0x10]
100cf065:	f3 0f 59 c4          	mulss  xmm0,xmm4
100cf069:	68 ff 00 00 00       	push   0xff
100cf06e:	f3 0f 59 cc          	mulss  xmm1,xmm4
100cf072:	68 34 2f 22 10       	push   0x10222f34
100cf077:	f3 0f 5c d8          	subss  xmm3,xmm0
100cf07b:	f3 0f 10 41 30       	movss  xmm0,DWORD PTR [ecx+0x30]
100cf080:	f3 0f 59 c4          	mulss  xmm0,xmm4
100cf084:	f3 0f 5c d0          	subss  xmm2,xmm0
100cf088:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100cf08d:	f3 0f 5c c1          	subss  xmm0,xmm1
100cf091:	f3 0f 11 5d f8       	movss  DWORD PTR [ebp-0x8],xmm3
100cf096:	8d 45 f4             	lea    eax,[ebp-0xc]
100cf099:	50                   	push   eax
100cf09a:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100cf09f:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100cf0a4:	e8 77 a5 04 00       	call   0x10119620
100cf0a9:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100cf0af:	f3 0f 10 1d 04 1f 1a 	movss  xmm3,DWORD PTR ds:0x101a1f04
100cf0b6:	10 
100cf0b7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf0ba:	6a 19                	push   0x19
100cf0bc:	f3 0f 10 51 44       	movss  xmm2,DWORD PTR [ecx+0x44]
100cf0c1:	f3 0f 10 49 48       	movss  xmm1,DWORD PTR [ecx+0x48]
100cf0c6:	f3 0f 10 41 40       	movss  xmm0,DWORD PTR [ecx+0x40]
100cf0cb:	f3 0f 59 d3          	mulss  xmm2,xmm3
100cf0cf:	68 ff 00 00 00       	push   0xff
100cf0d4:	f3 0f 59 cb          	mulss  xmm1,xmm3
100cf0d8:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
100cf0dd:	f3 0f 59 c3          	mulss  xmm0,xmm3
100cf0e1:	f3 0f 58 48 10       	addss  xmm1,DWORD PTR [eax+0x10]
100cf0e6:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
100cf0eb:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100cf0f0:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100cf0f5:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100cf0fa:	8d 45 f4             	lea    eax,[ebp-0xc]
100cf0fd:	68 34 2f 22 10       	push   0x10222f34
100cf102:	50                   	push   eax
100cf103:	e8 18 a5 04 00       	call   0x10119620
100cf108:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100cf10e:	83 c4 44             	add    esp,0x44
100cf111:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf114:	f3 0f 10 25 04 1f 1a 	movss  xmm4,DWORD PTR ds:0x101a1f04
100cf11b:	10 
100cf11c:	f3 0f 10 41 44       	movss  xmm0,DWORD PTR [ecx+0x44]
100cf121:	f3 0f 10 58 0c       	movss  xmm3,DWORD PTR [eax+0xc]
100cf126:	f3 0f 10 49 40       	movss  xmm1,DWORD PTR [ecx+0x40]
100cf12b:	f3 0f 10 50 10       	movss  xmm2,DWORD PTR [eax+0x10]
100cf130:	f3 0f 59 c4          	mulss  xmm0,xmm4
100cf134:	6a 19                	push   0x19
100cf136:	f3 0f 59 cc          	mulss  xmm1,xmm4
100cf13a:	68 ff 00 00 00       	push   0xff
100cf13f:	f3 0f 5c d8          	subss  xmm3,xmm0
100cf143:	f3 0f 10 41 48       	movss  xmm0,DWORD PTR [ecx+0x48]
100cf148:	f3 0f 59 c4          	mulss  xmm0,xmm4
100cf14c:	68 34 2f 22 10       	push   0x10222f34
100cf151:	f3 0f 5c d0          	subss  xmm2,xmm0
100cf155:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100cf15a:	f3 0f 5c c1          	subss  xmm0,xmm1
100cf15e:	f3 0f 11 5d f8       	movss  DWORD PTR [ebp-0x8],xmm3
100cf163:	8d 45 f4             	lea    eax,[ebp-0xc]
100cf166:	50                   	push   eax
100cf167:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100cf16c:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100cf171:	e8 aa a4 04 00       	call   0x10119620
100cf176:	8b 06                	mov    eax,DWORD PTR [esi]
100cf178:	83 c4 0c             	add    esp,0xc
100cf17b:	8b ce                	mov    ecx,esi
100cf17d:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100cf184:	ff 50 08             	call   DWORD PTR [eax+0x8]
100cf187:	5e                   	pop    esi
100cf188:	8b e5                	mov    esp,ebp
100cf18a:	5d                   	pop    ebp
100cf18b:	c3                   	ret
