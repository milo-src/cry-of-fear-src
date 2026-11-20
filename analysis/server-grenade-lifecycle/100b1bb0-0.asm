
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1bb0 <.text+0xb0bb0>:
100b1bb0:	55                   	push   ebp
100b1bb1:	8b ec                	mov    ebp,esp
100b1bb3:	83 ec 0c             	sub    esp,0xc
100b1bb6:	56                   	push   esi
100b1bb7:	6a 00                	push   0x0
100b1bb9:	e8 92 f3 ff ff       	call   0x100b0f50
100b1bbe:	8b f0                	mov    esi,eax
100b1bc0:	83 c4 04             	add    esp,0x4
100b1bc3:	8b ce                	mov    ecx,esi
100b1bc5:	8b 16                	mov    edx,DWORD PTR [esi]
100b1bc7:	ff 52 2c             	call   DWORD PTR [edx+0x2c]
100b1bca:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1bcd:	8d 45 0c             	lea    eax,[ebp+0xc]
100b1bd0:	50                   	push   eax
100b1bd1:	56                   	push   esi
100b1bd2:	c7 81 1c 01 00 00 00 	mov    DWORD PTR [ecx+0x11c],0x3f000000
100b1bd9:	00 00 3f 
100b1bdc:	e8 ff 83 06 00       	call   0x10119fe0
100b1be1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1be4:	f3 0f 7e 45 18       	movq   xmm0,QWORD PTR [ebp+0x18]
100b1be9:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100b1bee:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
100b1bf1:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100b1bf4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1bf7:	83 c0 20             	add    eax,0x20
100b1bfa:	50                   	push   eax
100b1bfb:	8d 45 f4             	lea    eax,[ebp-0xc]
100b1bfe:	50                   	push   eax
100b1bff:	e8 cc 8c 06 00       	call   0x1011a8d0
100b1c04:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1c07:	83 c4 0c             	add    esp,0xc
100b1c0a:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100b1c0e:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
100b1c13:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100b1c16:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
100b1c19:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1c1c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100b1c1f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100b1c26:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100b1c2c:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
100b1c32:	8b ce                	mov    ecx,esi
100b1c34:	8b 06                	mov    eax,DWORD PTR [esi]
100b1c36:	c7 46 78 60 13 0b 10 	mov    DWORD PTR [esi+0x78],0x100b1360
100b1c3d:	ff 50 08             	call   DWORD PTR [eax+0x8]
100b1c40:	83 ec 08             	sub    esp,0x8
100b1c43:	c7 44 24 04 00 00 fa 	mov    DWORD PTR [esp+0x4],0xc3fa0000
100b1c4a:	c3 
100b1c4b:	c7 04 24 00 00 c8 c2 	mov    DWORD PTR [esp],0xc2c80000
100b1c52:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100b1c58:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1c5b:	83 c4 08             	add    esp,0x8
100b1c5e:	d9 58 5c             	fstp   DWORD PTR [eax+0x5c]
100b1c61:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1c64:	c7 46 7c 50 19 0b 10 	mov    DWORD PTR [esi+0x7c],0x100b1950
100b1c6b:	c7 80 e4 01 00 00 00 	mov    DWORD PTR [eax+0x1e4],0x42c80000
100b1c72:	00 c8 42 
100b1c75:	8b c6                	mov    eax,esi
100b1c77:	5e                   	pop    esi
100b1c78:	8b e5                	mov    esp,ebp
100b1c7a:	5d                   	pop    ebp
100b1c7b:	c3                   	ret
