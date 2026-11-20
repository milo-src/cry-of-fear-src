
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012920 <.text+0x11920>:
10012920:	55                   	push   ebp
10012921:	8b ec                	mov    ebp,esp
10012923:	83 ec 24             	sub    esp,0x24
10012926:	56                   	push   esi
10012927:	8b f1                	mov    esi,ecx
10012929:	8d 4d e8             	lea    ecx,[ebp-0x18]
1001292c:	51                   	push   ecx
1001292d:	8b ce                	mov    ecx,esi
1001292f:	8b 06                	mov    eax,DWORD PTR [esi]
10012931:	ff 90 00 01 00 00    	call   DWORD PTR [eax+0x100]
10012937:	8d 4d dc             	lea    ecx,[ebp-0x24]
1001293a:	51                   	push   ecx
1001293b:	8b ce                	mov    ecx,esi
1001293d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10012941:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10012946:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
1001294b:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10012950:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
10012955:	8b 06                	mov    eax,DWORD PTR [esi]
10012957:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1001295c:	ff 90 fc 00 00 00    	call   DWORD PTR [eax+0xfc]
10012962:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
10012969:	10 
1001296a:	8b c8                	mov    ecx,eax
1001296c:	f3 0f 10 55 fc       	movss  xmm2,DWORD PTR [ebp-0x4]
10012971:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10012974:	f3 0f 59 d1          	mulss  xmm2,xmm1
10012978:	5e                   	pop    esi
10012979:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1001297d:	f3 0f 59 c1          	mulss  xmm0,xmm1
10012981:	f3 0f 58 c2          	addss  xmm0,xmm2
10012985:	f3 0f 10 55 f8       	movss  xmm2,DWORD PTR [ebp-0x8]
1001298a:	f3 0f 59 d1          	mulss  xmm2,xmm1
1001298e:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10012992:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
10012997:	f3 0f 59 c1          	mulss  xmm0,xmm1
1001299b:	f3 0f 58 c2          	addss  xmm0,xmm2
1001299f:	f3 0f 10 55 f4       	movss  xmm2,DWORD PTR [ebp-0xc]
100129a4:	f3 0f 59 d1          	mulss  xmm2,xmm1
100129a8:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100129ad:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100129b2:	f3 0f 59 c1          	mulss  xmm0,xmm1
100129b6:	f3 0f 58 c2          	addss  xmm0,xmm2
100129ba:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100129bf:	8b e5                	mov    esp,ebp
100129c1:	5d                   	pop    ebp
100129c2:	c2 08 00             	ret    0x8
