
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100edfb4 <.text+0xecfb4>:
100edfb4:	80 bf f9 1e 00 00 00 	cmp    BYTE PTR [edi+0x1ef9],0x0
100edfbb:	0f 84 a7 00 00 00    	je     0x100ee068
100edfc1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100edfc6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100edfca:	0f 2f 87 08 03 00 00 	comiss xmm0,DWORD PTR [edi+0x308]
100edfd1:	0f 86 91 00 00 00    	jbe    0x100ee068
100edfd7:	8b b7 38 25 00 00    	mov    esi,DWORD PTR [edi+0x2538]
100edfdd:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
100edfe3:	89 87 34 25 00 00    	mov    DWORD PTR [edi+0x2534],eax
100edfe9:	89 b7 2c 25 00 00    	mov    DWORD PTR [edi+0x252c],esi
100edfef:	85 f6                	test   esi,esi
100edff1:	0f 84 6a 00 00 00    	je     0x100ee061
100edff7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100edffa:	ba e4 9a 1a 10       	mov    edx,0x101a9ae4
100edfff:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100ee005:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100ee00b:	f7 d9                	neg    ecx
100ee00d:	1b c9                	sbb    ecx,ecx
100ee00f:	23 c8                	and    ecx,eax
100ee011:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ee016:	8b 09                	mov    ecx,DWORD PTR [ecx]
100ee018:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100ee01e:	66 90                	xchg   ax,ax
100ee020:	8a 01                	mov    al,BYTE PTR [ecx]
100ee022:	3a 02                	cmp    al,BYTE PTR [edx]
100ee024:	75 1a                	jne    0x100ee040
100ee026:	84 c0                	test   al,al
100ee028:	74 12                	je     0x100ee03c
100ee02a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ee02d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100ee030:	75 0e                	jne    0x100ee040
100ee032:	83 c1 02             	add    ecx,0x2
100ee035:	83 c2 02             	add    edx,0x2
100ee038:	84 c0                	test   al,al
100ee03a:	75 e4                	jne    0x100ee020
100ee03c:	33 c0                	xor    eax,eax
100ee03e:	eb 05                	jmp    0x100ee045
100ee040:	1b c0                	sbb    eax,eax
100ee042:	83 c8 01             	or     eax,0x1
100ee045:	85 c0                	test   eax,eax
100ee047:	74 18                	je     0x100ee061
100ee049:	8b 06                	mov    eax,DWORD PTR [esi]
100ee04b:	8b ce                	mov    ecx,esi
100ee04d:	ff 90 44 01 00 00    	call   DWORD PTR [eax+0x144]
100ee053:	8b 8f 2c 25 00 00    	mov    ecx,DWORD PTR [edi+0x252c]
100ee059:	8b 01                	mov    eax,DWORD PTR [ecx]
100ee05b:	ff 90 50 01 00 00    	call   DWORD PTR [eax+0x150]
100ee061:	c6 87 f9 1e 00 00 00 	mov    BYTE PTR [edi+0x1ef9],0x0
