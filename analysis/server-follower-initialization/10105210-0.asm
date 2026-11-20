
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105210 <.text+0x104210>:
10105210:	55                   	push   ebp
10105211:	8b ec                	mov    ebp,esp
10105213:	83 7d 18 00          	cmp    DWORD PTR [ebp+0x18],0x0
10105217:	56                   	push   esi
10105218:	8b f1                	mov    esi,ecx
1010521a:	75 05                	jne    0x10105221
1010521c:	e8 9f 06 00 00       	call   0x101058c0
10105221:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10105226:	83 ec 0c             	sub    esp,0xc
10105229:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1010522e:	8b ce                	mov    ecx,esi
10105230:	0f 28 c1             	movaps xmm0,xmm1
10105233:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
10105237:	8b 06                	mov    eax,DWORD PTR [esi]
10105239:	f3 0f 11 86 c0 03 00 	movss  DWORD PTR [esi+0x3c0],xmm0
10105240:	00 
10105241:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10105246:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
1010524c:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10105251:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10105257:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1010525c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1010525f:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
10105265:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
10105268:	8d 8e e0 03 00 00    	lea    ecx,[esi+0x3e0]
1010526e:	e8 cd 24 f1 ff       	call   0x10017740
10105273:	5e                   	pop    esi
10105274:	5d                   	pop    ebp
10105275:	c2 18 00             	ret    0x18
