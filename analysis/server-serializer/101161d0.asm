
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101161d0 <.text+0x1151d0>:
101161d0:	55                   	push   ebp
101161d1:	8b ec                	mov    ebp,esp
101161d3:	56                   	push   esi
101161d4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
101161d7:	8b f1                	mov    esi,ecx
101161d9:	e8 42 10 00 00       	call   0x10117220
101161de:	81 7d 0c 00 00 01 00 	cmp    DWORD PTR [ebp+0xc],0x10000
101161e5:	0f b7 c0             	movzx  eax,ax
101161e8:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
101161eb:	7e 10                	jle    0x101161fd
101161ed:	68 ac 59 1e 10       	push   0x101e59ac
101161f2:	6a 04                	push   0x4
101161f4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101161fa:	83 c4 08             	add    esp,0x8
101161fd:	6a 02                	push   0x2
101161ff:	8d 45 0c             	lea    eax,[ebp+0xc]
10116202:	8b ce                	mov    ecx,esi
10116204:	50                   	push   eax
10116205:	e8 36 ff ff ff       	call   0x10116140
1011620a:	6a 02                	push   0x2
1011620c:	8d 45 08             	lea    eax,[ebp+0x8]
1011620f:	8b ce                	mov    ecx,esi
10116211:	50                   	push   eax
10116212:	e8 29 ff ff ff       	call   0x10116140
10116217:	5e                   	pop    esi
10116218:	5d                   	pop    ebp
10116219:	c2 08 00             	ret    0x8
