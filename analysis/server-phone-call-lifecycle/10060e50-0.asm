
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10060e50 <.text+0x5fe50>:
10060e50:	56                   	push   esi
10060e51:	8b f1                	mov    esi,ecx
10060e53:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
10060e59:	85 c9                	test   ecx,ecx
10060e5b:	74 16                	je     0x10060e73
10060e5d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10060e62:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10060e68:	03 c1                	add    eax,ecx
10060e6a:	50                   	push   eax
10060e6b:	e8 c0 5b 0b 00       	call   0x10116a30
10060e70:	83 c4 04             	add    esp,0x4
10060e73:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10060e76:	5e                   	pop    esi
10060e77:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
10060e7e:	74 0b                	je     0x10060e8b
10060e80:	68 34 29 1b 10       	push   0x101b2934
10060e85:	e8 a6 5b 0b 00       	call   0x10116a30
10060e8a:	59                   	pop    ecx
10060e8b:	c3                   	ret
