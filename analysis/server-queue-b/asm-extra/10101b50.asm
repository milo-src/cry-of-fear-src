
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101b50 <.text+0x100b50>:
10101b50:	55                   	push   ebp
10101b51:	8b ec                	mov    ebp,esp
10101b53:	f3 0f 7e 45 08       	movq   xmm0,QWORD PTR [ebp+0x8]
10101b58:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10101b5b:	66 0f d6 81 6c 01 00 	movq   QWORD PTR [ecx+0x16c],xmm0
10101b62:	00 
10101b63:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10101b68:	51                   	push   ecx
10101b69:	89 81 74 01 00 00    	mov    DWORD PTR [ecx+0x174],eax
10101b6f:	f3 0f 11 81 68 01 00 	movss  DWORD PTR [ecx+0x168],xmm0
10101b76:	00 
10101b77:	c7 41 78 60 1c 10 10 	mov    DWORD PTR [ecx+0x78],0x10101c60
10101b7e:	e8 cd 2c fc ff       	call   0x100c4850
10101b83:	83 c4 04             	add    esp,0x4
10101b86:	5d                   	pop    ebp
10101b87:	c2 10 00             	ret    0x10
