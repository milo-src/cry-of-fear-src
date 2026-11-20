
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000eec0 <.text+0xdec0>:
1000eec0:	55                   	push   ebp
1000eec1:	8b ec                	mov    ebp,esp
1000eec3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000eec6:	85 c0                	test   eax,eax
1000eec8:	75 02                	jne    0x1000eecc
1000eeca:	5d                   	pop    ebp
1000eecb:	c3                   	ret
1000eecc:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1000eecf:	56                   	push   esi
1000eed0:	8b b0 a8 00 00 00    	mov    esi,DWORD PTR [eax+0xa8]
1000eed6:	03 f0                	add    esi,eax
1000eed8:	69 55 0c b0 00 00 00 	imul   edx,DWORD PTR [ebp+0xc],0xb0
1000eedf:	8b 44 32 60          	mov    eax,DWORD PTR [edx+esi*1+0x60]
1000eee3:	89 01                	mov    DWORD PTR [ecx],eax
1000eee5:	8b 44 32 64          	mov    eax,DWORD PTR [edx+esi*1+0x64]
1000eee9:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000eeec:	8b 44 32 68          	mov    eax,DWORD PTR [edx+esi*1+0x68]
1000eef0:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000eef3:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
1000eef6:	8b 44 32 6c          	mov    eax,DWORD PTR [edx+esi*1+0x6c]
1000eefa:	89 01                	mov    DWORD PTR [ecx],eax
1000eefc:	8b 44 32 70          	mov    eax,DWORD PTR [edx+esi*1+0x70]
1000ef00:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000ef03:	8b 44 32 74          	mov    eax,DWORD PTR [edx+esi*1+0x74]
1000ef07:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000ef0a:	b8 01 00 00 00       	mov    eax,0x1
1000ef0f:	5e                   	pop    esi
1000ef10:	5d                   	pop    ebp
1000ef11:	c3                   	ret
