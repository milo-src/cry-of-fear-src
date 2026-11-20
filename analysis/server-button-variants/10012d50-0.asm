
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012d50 <.text+0x11d50>:
10012d50:	8b d1                	mov    edx,ecx
10012d52:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10012d55:	c7 82 00 01 00 00 03 	mov    DWORD PTR [edx+0x100],0x3
10012d5c:	00 00 00 
10012d5f:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
10012d66:	00 00 00 
10012d69:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10012d6c:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10012d73:	0f 85 27 fe ff ff    	jne    0x10012ba0
10012d79:	83 ec 10             	sub    esp,0x10
10012d7c:	c7 82 54 01 00 00 a0 	mov    DWORD PTR [edx+0x154],0x10012ba0
10012d83:	2b 01 10 
10012d86:	83 ba ac 01 00 00 00 	cmp    DWORD PTR [edx+0x1ac],0x0
10012d8d:	8b cc                	mov    ecx,esp
10012d8f:	f3 0f 10 80 fc 01 00 	movss  xmm0,DWORD PTR [eax+0x1fc]
10012d96:	00 
10012d97:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10012d9d:	75 22                	jne    0x10012dc1
10012d9f:	8b 82 1c 01 00 00    	mov    eax,DWORD PTR [edx+0x11c]
10012da5:	89 01                	mov    DWORD PTR [ecx],eax
10012da7:	8b 82 20 01 00 00    	mov    eax,DWORD PTR [edx+0x120]
10012dad:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10012db0:	8b 82 24 01 00 00    	mov    eax,DWORD PTR [edx+0x124]
10012db6:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10012db9:	8b ca                	mov    ecx,edx
10012dbb:	e8 00 f8 0e 00       	call   0x101025c0
10012dc0:	c3                   	ret
10012dc1:	8b 82 34 01 00 00    	mov    eax,DWORD PTR [edx+0x134]
10012dc7:	89 01                	mov    DWORD PTR [ecx],eax
10012dc9:	8b 82 38 01 00 00    	mov    eax,DWORD PTR [edx+0x138]
10012dcf:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10012dd2:	8b 82 3c 01 00 00    	mov    eax,DWORD PTR [edx+0x13c]
10012dd8:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10012ddb:	8b ca                	mov    ecx,edx
10012ddd:	e8 6e ed 0e 00       	call   0x10101b50
10012de2:	c3                   	ret
