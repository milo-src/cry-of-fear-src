
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b18e0 <.text+0xb08e0>:
100b18e0:	55                   	push   ebp
100b18e1:	8b ec                	mov    ebp,esp
100b18e3:	83 ec 44             	sub    esp,0x44
100b18e6:	56                   	push   esi
100b18e7:	8b f1                	mov    esi,ecx
100b18e9:	0f 57 c9             	xorps  xmm1,xmm1
100b18ec:	8d 4d bc             	lea    ecx,[ebp-0x44]
100b18ef:	51                   	push   ecx
100b18f0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b18f3:	f3 0f 10 58 0c       	movss  xmm3,DWORD PTR [eax+0xc]
100b18f8:	8d 50 08             	lea    edx,[eax+0x8]
100b18fb:	f3 0f 10 52 08       	movss  xmm2,DWORD PTR [edx+0x8]
100b1900:	f3 0f 58 d9          	addss  xmm3,xmm1
100b1904:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
100b1908:	f3 0f 5c 15 28 97 1a 	subss  xmm2,DWORD PTR ds:0x101a9728
100b190f:	10 
100b1910:	f3 0f 58 c1          	addss  xmm0,xmm1
100b1914:	f3 0f 11 5d f8       	movss  DWORD PTR [ebp-0x8],xmm3
100b1919:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100b191e:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100b1923:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b1929:	8d 45 f4             	lea    eax,[ebp-0xc]
100b192c:	6a 01                	push   0x1
100b192e:	50                   	push   eax
100b192f:	52                   	push   edx
100b1930:	e8 cb 8e 06 00       	call   0x1011a800
100b1935:	83 c4 14             	add    esp,0x14
100b1938:	8d 45 bc             	lea    eax,[ebp-0x44]
100b193b:	8b ce                	mov    ecx,esi
100b193d:	6a 40                	push   0x40
100b193f:	50                   	push   eax
100b1940:	e8 fb fb ff ff       	call   0x100b1540
100b1945:	5e                   	pop    esi
100b1946:	8b e5                	mov    esp,ebp
100b1948:	5d                   	pop    ebp
100b1949:	c2 18 00             	ret    0x18
