
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000afe0 <.text+0x9fe0>:
1000afe0:	8b 91 34 02 00 00    	mov    edx,DWORD PTR [ecx+0x234]
1000afe6:	85 d2                	test   edx,edx
1000afe8:	78 11                	js     0x1000affb
1000afea:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
1000aff0:	3b 50 04             	cmp    edx,DWORD PTR [eax+0x4]
1000aff3:	7d 06                	jge    0x1000affb
1000aff5:	8b 00                	mov    eax,DWORD PTR [eax]
1000aff7:	8d 04 d0             	lea    eax,[eax+edx*8]
1000affa:	c3                   	ret
1000affb:	33 c0                	xor    eax,eax
1000affd:	c3                   	ret
