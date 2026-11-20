
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100488c0 <.text+0x478c0>:
100488c0:	56                   	push   esi
100488c1:	8b f1                	mov    esi,ecx
100488c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100488c6:	8b 88 ec 01 00 00    	mov    ecx,DWORD PTR [eax+0x1ec]
100488cc:	85 c9                	test   ecx,ecx
100488ce:	74 19                	je     0x100488e9
100488d0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100488d5:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100488db:	03 c1                	add    eax,ecx
100488dd:	50                   	push   eax
100488de:	e8 4d e1 0c 00       	call   0x10116a30
100488e3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100488e6:	83 c4 04             	add    esp,0x4
100488e9:	8b 88 f0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f0]
100488ef:	85 c9                	test   ecx,ecx
100488f1:	74 19                	je     0x1004890c
100488f3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100488f8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100488fe:	03 c1                	add    eax,ecx
10048900:	50                   	push   eax
10048901:	e8 2a e1 0c 00       	call   0x10116a30
10048906:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048909:	83 c4 04             	add    esp,0x4
1004890c:	8b 88 f4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f4]
10048912:	85 c9                	test   ecx,ecx
10048914:	74 19                	je     0x1004892f
10048916:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004891b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10048921:	03 c1                	add    eax,ecx
10048923:	50                   	push   eax
10048924:	e8 07 e1 0c 00       	call   0x10116a30
10048929:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004892c:	83 c4 04             	add    esp,0x4
1004892f:	8b 88 f8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f8]
10048935:	5e                   	pop    esi
10048936:	85 c9                	test   ecx,ecx
10048938:	74 14                	je     0x1004894e
1004893a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004893f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10048945:	03 c1                	add    eax,ecx
10048947:	50                   	push   eax
10048948:	e8 e3 e0 0c 00       	call   0x10116a30
1004894d:	59                   	pop    ecx
1004894e:	c3                   	ret
